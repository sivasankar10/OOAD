
#ifndef DOCTOR_CLASS_H
#define DOCTOR_CLASS_H
#include "permission_class.h"

#include <string>

/**
  * class doctor_class
  * 
  */

class doctor_class : public permission_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  doctor_class ();

  /**
   * Empty Destructor
   */
  virtual ~doctor_class ();

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
  void delete ()
  {
  }


  /**
   */
  void search ()
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

  void id;
  void name;
  void mobile;
  void email;
  void addess;
  void password;
  void username;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of mobile
   * @param new_var the new value of mobile
   */
  void setMobile (void new_var)   {
      mobile = new_var;
  }

  /**
   * Get the value of mobile
   * @return the value of mobile
   */
  void getMobile ()   {
    return mobile;
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
   * Set the value of addess
   * @param new_var the new value of addess
   */
  void setAddess (void new_var)   {
      addess = new_var;
  }

  /**
   * Get the value of addess
   * @return the value of addess
   */
  void getAddess ()   {
    return addess;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (void new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  void getPassword ()   {
    return password;
  }

  /**
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername (void new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  void getUsername ()   {
    return username;
  }
private:


  void initAttributes () ;

};

#endif // DOCTOR_CLASS_H
