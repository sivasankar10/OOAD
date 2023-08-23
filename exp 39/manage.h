
#ifndef MANAGE_H
#define MANAGE_H

#include <string>

/**
  * class manage
  * 
  */

class manage
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  manage ();

  /**
   * Empty Destructor
   */
  virtual ~manage ();

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
  void manager_facilities ()
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

  void firstname;
  void lastname;
  void id;
  void username;
  void password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of firstname
   * @param new_var the new value of firstname
   */
  void setFirstname (void new_var)   {
      firstname = new_var;
  }

  /**
   * Get the value of firstname
   * @return the value of firstname
   */
  void getFirstname ()   {
    return firstname;
  }

  /**
   * Set the value of lastname
   * @param new_var the new value of lastname
   */
  void setLastname (void new_var)   {
      lastname = new_var;
  }

  /**
   * Get the value of lastname
   * @return the value of lastname
   */
  void getLastname ()   {
    return lastname;
  }

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
private:


  void initAttributes () ;

};

#endif // MANAGE_H
