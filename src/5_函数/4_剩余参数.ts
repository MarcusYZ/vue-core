function buildName(firstName: string, ...restOfName: string[]): string {
  return firstName + " " + restOfName.join(" ");
}

let employeeName = buildName("JosePh", "Samual", "Lucas", "Mackinzie");
console.log(employeeName);
