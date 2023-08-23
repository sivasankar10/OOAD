
#ifndef USER_CLASS_H
#define USER_CLASS_H
#include "role_class.h"
#include "permission_class.h"

#include <string>

/**
  * class user_class
  * 
  */

class user_class : public role_class, public permission_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  user_class ();

  /**
   * Empty Destructor
   */
  virtual ~user_class ();

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
  void add ()
  {
  }


  /**
   */
  void edit ()
  {
  }


  /**
   */
  void search ()
  {
  }


  /**
   */
  void delete ()
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

  void ID;
  void role_ID;
  void user;
  void email;
  void DOB;
  void address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ID
   * @param new_var the new value of ID
   */
  void setID (void new_var)   {
      ID = new_var;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  void getID ()   {
    return ID;
  }

  /**
   * Set the value of role_ID
   * @param new_var the new value of role_ID
   */
  void setRole_ID (void new_var)   {
      role_ID = new_var;
  }

  /**
   * Get the value of role_ID
   * @return the value of role_ID
   */
  void getRole_ID ()   {
    return role_ID;
  }

  /**
   * Set the value of user
   * @param new_var the new value of user
   */
  void setUser (void new_var)   {
      user = new_var;
  }

  /**
   * Get the value of user
   * @return the value of user
   */
  void getUser ()   {
    return user;
  }

  /**
   * Set the value of email
   * @param new_var the new value of email
   */
  void setEmail (void new_var)   {
      email = new_var;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  void getEmail ()   {
    return email;
  }

  /**
   * Set the value of DOB
   * @param new_var the new value of DOB
   */
  void setDOB (void new_var)   {
      DOB = new_var;
  }

  /**
   * Get the value of DOB
   * @return the value of DOB
   */
  void getDOB ()   {
    return DOB;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (void new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  void getAddress ()   {
    return address;
  }
private:


  void initAttributes () ;

};

#endif // USER_CLASS_H
