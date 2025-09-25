const services = [
    { name: "Service A", cost: 200, type: "Consulting" },
    { name: "Service B", cost: 150, type: "Maintenance" },
    { name: "Service C", cost: 300, type: "Development" },
    { name: "Service D", cost: 100, type: "Support" },
    { name: "Service E", cost: 250, type: "Consulting" },
];

const updatedServices = [];

services.map((item) => {
    let originalCost = item.cost;
    let discount = (originalCost * 15) / 100;
    let newCost = originalCost - discount;

    updatedServices.push({
        name: item.name,
        cost: +newCost.toFixed(2),
        type: item.type
    });
});

console.log(updatedServices);
