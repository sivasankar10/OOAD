
#ifndef DOCTOR_H
#define DOCTOR_H
#include "hospitalstaff.h"

#include <string>

/**
  * class doctor
  * 
  */

class doctor : public hospitalstaff
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  doctor ();

  /**
   * Empty Destructor
   */
  virtual ~doctor ();

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
  void get_info_ ()
  {
  }


  /**
   */
  void getappointment ()
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

  void fielsofspecialization;
  void appointmentstatus;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of fielsofspecialization
   * @param new_var the new value of fielsofspecialization
   */
  void setFielsofspecialization (void new_var)   {
      fielsofspecialization = new_var;
  }

  /**
   * Get the value of fielsofspecialization
   * @return the value of fielsofspecialization
   */
  void getFielsofspecialization ()   {
    return fielsofspecialization;
  }

  /**
   * Set the value of appointmentstatus
   * @param new_var the new value of appointmentstatus
   */
  void setAppointmentstatus (void new_var)   {
      appointmentstatus = new_var;
  }

  /**
   * Get the value of appointmentstatus
   * @return the value of appointmentstatus
   */
  void getAppointmentstatus ()   {
    return appointmentstatus;
  }
private:


  void initAttributes () ;

};

#endif // DOCTOR_H
