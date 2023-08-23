
#ifndef COURSE_PAMPLET_H
#define COURSE_PAMPLET_H

#include <string>

/**
  * class course_pamplet
  * 
  */

class course_pamplet
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  course_pamplet ();

  /**
   * Empty Destructor
   */
  virtual ~course_pamplet ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void view ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void course_name;
  void course_no;
  void period;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of course_name
   * @param new_var the new value of course_name
   */
  void setCourse_name (void new_var)   {
      course_name = new_var;
  }

  /**
   * Get the value of course_name
   * @return the value of course_name
   */
  void getCourse_name ()   {
    return course_name;
  }

  /**
   * Set the value of course_no
   * @param new_var the new value of course_no
   */
  void setCourse_no (void new_var)   {
      course_no = new_var;
  }

  /**
   * Get the value of course_no
   * @return the value of course_no
   */
  void getCourse_no ()   {
    return course_no;
  }

  /**
   * Set the value of period
   * @param new_var the new value of period
   */
  void setPeriod (void new_var)   {
      period = new_var;
  }

  /**
   * Get the value of period
   * @return the value of period
   */
  void getPeriod ()   {
    return period;
  }
private:


  void initAttributes () ;

};

#endif // COURSE_PAMPLET_H
