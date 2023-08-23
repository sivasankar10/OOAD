
#ifndef ADMIN_H
#define ADMIN_H
#include "User_type.h"
#include "User.h"

#include <string>

/**
  * class Admin
  * 
  */

class Admin : public User_type, public User
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Admin ();

  /**
   * Empty Destructor
   */
  virtual ~Admin ();

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
  void update ()
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

  int _adminID_;
  string _name_;
  int loginID_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _adminID_
   * @param new_var the new value of _adminID_
   */
  void set_adminID_ (int new_var)   {
      _adminID_ = new_var;
  }

  /**
   * Get the value of _adminID_
   * @return the value of _adminID_
   */
  int get_adminID_ ()   {
    return _adminID_;
  }

  /**
   * Set the value of _name_
   * @param new_var the new value of _name_
   */
  void set_name_ (string new_var)   {
      _name_ = new_var;
  }

  /**
   * Get the value of _name_
   * @return the value of _name_
   */
  string get_name_ ()   {
    return _name_;
  }

  /**
   * Set the value of loginID_
   * @param new_var the new value of loginID_
   */
  void setLoginID_ (int new_var)   {
      loginID_ = new_var;
  }

  /**
   * Get the value of loginID_
   * @return the value of loginID_
   */
  int getLoginID_ ()   {
    return loginID_;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H
