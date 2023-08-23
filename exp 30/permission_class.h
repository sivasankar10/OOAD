
#ifndef PERMISSION_CLASS_H
#define PERMISSION_CLASS_H

#include <string>

/**
  * class Permission_class
  * 
  */

class Permission_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Permission_class ();

  /**
   * Empty Destructor
   */
  virtual ~Permission_class ();

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
  void _addRole_ ()
  {
  }


  /**
   */
  void _editRole ()
  {
  }


  /**
   */
  void _deleteRole_ ()
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

  void role_id_int;
  void role_title_string;
  void role_description_string;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of role_id_int
   * @param new_var the new value of role_id_int
   */
  void setRole_id_int (void new_var)   {
      role_id_int = new_var;
  }

  /**
   * Get the value of role_id_int
   * @return the value of role_id_int
   */
  void getRole_id_int ()   {
    return role_id_int;
  }

  /**
   * Set the value of role_title_string
   * @param new_var the new value of role_title_string
   */
  void setRole_title_string (void new_var)   {
      role_title_string = new_var;
  }

  /**
   * Get the value of role_title_string
   * @return the value of role_title_string
   */
  void getRole_title_string ()   {
    return role_title_string;
  }

  /**
   * Set the value of role_description_string
   * @param new_var the new value of role_description_string
   */
  void setRole_description_string (void new_var)   {
      role_description_string = new_var;
  }

  /**
   * Get the value of role_description_string
   * @return the value of role_description_string
   */
  void getRole_description_string ()   {
    return role_description_string;
  }
private:


  void initAttributes () ;

};

#endif // PERMISSION_CLASS_H
