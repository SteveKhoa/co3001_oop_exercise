public class StudentController{
	private Student model;
    private StudentView view;

    public StudentController(Student pmodel, StudentView pview) {
        model = pmodel;
        view = pview;
    }

    public void setStudentName(String name) {
        model.setName(name);
    }

    public String getStudentName() {
        return model.getName();
    }

    public void setStudentRollNo(String rollno) {
        model.setRollNo(rollno);
    }

    public String getStudentRollNo() {
        return model.getRollNo();
    }

    public void updateView() {
        view.printStudentDetails();
    }
}