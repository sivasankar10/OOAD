
#ifndef LOGIN_INFORMATION_H
#define LOGIN_INFORMATION_H

#include <string>

/**
  * class Login_Information
  * 
  */

class Login_Information
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Login_Information ();

  /**
   * Empty Destructor
   */
  virtual ~Login_Information ();

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
  void _create ()
  {
  }


  /**
   */
  void _validsate ()
  {
  }


  /**
   */
  void _update ()
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

  int _loginID_;
  int _accountno_;
  string username_;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _loginID_
   * @param new_var the new value of _loginID_
   */
  void set_loginID_ (int new_var)   {
      _loginID_ = new_var;
  }

  /**
   * Get the value of _loginID_
   * @return the value of _loginID_
   */
  int get_loginID_ ()   {
    return _loginID_;
  }

  /**
   * Set the value of _accountno_
   * @param new_var the new value of _accountno_
   */
  void set_accountno_ (int new_var)   {
      _accountno_ = new_var;
  }

  /**
   * Get the value of _accountno_
   * @return the value of _accountno_
   */
  int get_accountno_ ()   {
    return _accountno_;
  }

  /**
   * Set the value of username_
   * @param new_var the new value of username_
   */
  void setUsername_ (string new_var)   {
      username_ = new_var;
  }

  /**
   * Get the value of username_
   * @return the value of username_
   */
  string getUsername_ ()   {
    return username_;
  }
private:


  void initAttributes () ;

};

#endif // LOGIN_INFORMATION_H
