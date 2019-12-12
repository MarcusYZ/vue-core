function buildName(firstName: string, lastName = "Smith"): string {
  return firstName + " " + lastName;
}

let result1 = buildName("Bob");
