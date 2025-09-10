$('.owl-carousel').owlCarousel({
    items:1,
    margin:10,
    autoHeight:true
});

$('.loop').owlCarousel({
    center: true,
    items:2,
    loop:true,
    margin:10,
    responsive:{
        600:{
            items:4
        }
    }
});