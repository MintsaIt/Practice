document.addEventListener('DOMContentLoaded', () => {
  const gallery = document.getElementById('image-gallery');
  const tabs = document.querySelectorAll('.tab-btn');

  const categories = {
    bean: [
      { name: '아라비카', description: '아라비카 (Arabica)', src: 'media/Arabica.jpg' },
      { name: '로부스타', description: '로부스타 (Robusta)', src: 'media/Robusta.jpg' },
      { name: '리베리카', description: '리베리카 (Liberica)', src: 'media/Liberica.jpg' },
      { name: '엑셀사', description: '엑셀사 (Excelsa)', src: 'media/Excelsa.jpg' }
    ],
    coffee: [
      { name: '아메리카노', description: '아메리카노', src: 'media/아메리카노.jpg' },
      { name: '카페라떼', description: '카페라떼', src: 'media/카페라떼.jpg' },
      { name: '바닐라라떼', description: '바닐라라떼', src: 'media/바닐라라떼.jpg' },
      { name: '플랫화이트', description: '플랫화이트', src: 'media/플랫화이트.jpg' },
      { name: '아인슈페너', description: '아인슈페너', src: 'media/아인슈페너.jpg' },
      { name: '콜드브루', description: '콜드브루', src: 'media/콜드브루.jpg' }
    ],
    dessert: [
      { name: '버터바', description: '버터바', src: 'media/버터바.jpg' },
      { name: '약과', description: '약과', src: 'media/약과.jpg' },
      { name: '아이스크림', description: '아이스크림', src: 'media/아이스크림.jpg' }
    ]
  };

  function render(category) {
    gallery.innerHTML = '';
    (categories[category] || []).forEach(item => {
      const div = document.createElement('div');
      div.className = 'image-item';
      div.innerHTML = `<img src="${item.src}" alt="${item.name}"><p>${item.name}</p>`;
      gallery.appendChild(div);
    });
  }

  tabs.forEach(btn => {
    btn.addEventListener('click', () => {
      tabs.forEach(b => b.classList.remove('active'));
      btn.classList.add('active');

      const category = btn.dataset.category;
      console.log('render', category);
      render(category);
    });
  });

    function setActiveTab(category) {
    tabs.forEach(b => {
      b.classList.toggle('active', b.dataset.category === category);
    });
  }

   const params = new URLSearchParams(location.search);
  const initialCat = params.get('cat');
  if (initialCat && categories[initialCat]) {
    setActiveTab(initialCat);
    render(initialCat);
  }


});
