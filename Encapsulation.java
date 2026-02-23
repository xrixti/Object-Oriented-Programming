class Student {
    private String name;
    private int age;

    // Getter method to retrieve the name
    public String getName() {
        return name;
    }

    // Setter method to set the name
    public void setName(String name) {
        this.name = name;
    }

    // Getter method to retrieve the age
    public int getAge() {
        return age;
    }

    // Setter method to set the age
    public void setAge(int age) {
        // Perform validation before setting the age
        if (age > 0 && age <= 120) {
            this.age = age;
        } else {
            System.out.println("Invalid age!");
        }
    }
}

public class Encapsulation {
    public static void main(String[] args) {
        Student student = new Student();

        // Setting the name and age using the setter methods
        student.setName("Alice");
        student.setAge(25);

        // Retrieving and displaying the name and age using getter methods
        System.out.println("Name: " + student.getName());
        System.out.println("Age: " + student.getAge());

        // Attempting to set an invalid age
        student.setAge(150);  // This will print "Invalid age!"
    }
}