document.addEventListener('DOMContentLoaded', () => {
    const imageGallery = document.getElementById('image-gallery');
    const addImageBtn = document.getElementById('addImageBtn');
    const imageModal = document.getElementById('image-modal');
    const submitImageBtn = document.getElementById('submitImageBtn');
    const cancelImageBtn = document.getElementById('cancelImageBtn');
    const imageNameInput = document.getElementById('imageName');
    const imageDescInput = document.getElementById('imageDesc');
    const imageUrlInput = document.getElementById('imageUrl');

    // 초기 이미지 데이터
    let images = [
        { name: '아메리카노', description: '아메리카노', src: 'media/아메리카노.jpg' },
        { name: '카페라떼', description: '카페라떼', src: 'media/카페라떼.jpg' },
        { name: '바닐라라떼', description: '바닐라라떼', src: 'media/바닐라라떼.jpg' },
        { name: '플랫화이트', description: '플랫화이트', src: 'media/플랫화이트.jpg' },
        { name: '아인슈페너', description: '아인슈페너', src: 'media/아인슈페너.jpg' },
        { name: '콜드브루', description: '콜드브루', src: 'media/콜드브루.jpg' }
    ];

    // 이미지 갤러리 렌더링 함수
    function renderGallery() {
        imageGallery.innerHTML = ''; // 기존 이미지 모두 제거
        images.forEach(image => {
            const imageItem = document.createElement('div');
            imageItem.classList.add('image-item');

            const img = document.createElement('img');
            img.src = image.src;
            img.alt = image.name;

            const descriptionParagraph = document.createElement('p');
            descriptionParagraph.textContent = image.description;

            imageItem.appendChild(img);
            imageItem.appendChild(descriptionParagraph);

            // 이미지 클릭 시 상세 정보 출력
            // img.addEventListener('click', () => {
            //     const existingInfo = imageItem.querySelector('.image-info');
            //     if (existingInfo) {
            //         existingInfo.remove(); // 이미 정보가 있으면 제거
            //         return;
            //     }

            //     const imageInfo = document.createElement('div');
            //     imageInfo.classList.add('image-info');

            //     const infoName = document.createElement('h3');
            //     infoName.textContent = image.name;

            //     const infoDesc = document.createElement('p');
            //     infoDesc.textContent = image.description;

            //     const closeButton = document.createElement('button');
            //     closeButton.classList.add('close-button');
            //     closeButton.textContent = '닫기';
            //     closeButton.addEventListener('click', (e) => {
            //         e.stopPropagation(); // 이미지 클릭 이벤트 버블링 방지
            //         imageInfo.remove();
            //     });

            //     imageInfo.appendChild(infoName);
            //     imageInfo.appendChild(infoDesc);
            //     imageInfo.appendChild(closeButton);

            //     imageItem.appendChild(imageInfo);
            // });

            

            imageGallery.appendChild(imageItem);
        });
    }

    // 최초 문서 로딩 시 이미지 출력
    renderGallery();

    // // '이미지 추가' 버튼 클릭 시 모달 열기
    // addImageBtn.addEventListener('click', () => {
    //     imageModal.classList.remove('hidden');
    //     imageNameInput.value = '';
    //     imageDescInput.value = '';
    //     imageUrlInput.value = '';
    // });

    // // 이미지 추가 모달에서 '추가' 버튼 클릭 시
    // submitImageBtn.addEventListener('click', () => {
    //     const newName = imageNameInput.value.trim();
    //     const newDesc = imageDescInput.value.trim();
    //     const newUrl = imageUrlInput.value.trim();

    //     if (newName && newDesc && newUrl) {
    //         images.push({ name: newName, description: newDesc, src: newUrl });
    //         renderGallery(); // 새 이미지 추가 후 갤러리 다시 렌더링
    //         imageModal.classList.add('hidden'); // 모달 닫기
    //     } else {
    //         alert('모든 필드를 입력해주세요.');
    //     }
    // });

    // // 이미지 추가 모달에서 '취소' 버튼 클릭 시
    // cancelImageBtn.addEventListener('click', () => {
    //     imageModal.classList.add('hidden'); // 모달 닫기
    // });
});