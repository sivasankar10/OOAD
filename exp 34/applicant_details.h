
#ifndef APPLICANT_DETAILS_H
#define APPLICANT_DETAILS_H

#include <string>

/**
  * class applicant_details
  * 
  */

class applicant_details
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  applicant_details ();

  /**
   * Empty Destructor
   */
  virtual ~applicant_details ();

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
  void _add ()
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

  void _name;
  void _id;
  void _proof;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of _name
   * @param new_var the new value of _name
   */
  void set_name (void new_var)   {
      _name = new_var;
  }

  /**
   * Get the value of _name
   * @return the value of _name
   */
  void get_name ()   {
    return _name;
  }

  /**
   * Set the value of _id
   * @param new_var the new value of _id
   */
  void set_id (void new_var)   {
      _id = new_var;
  }

  /**
   * Get the value of _id
   * @return the value of _id
   */
  void get_id ()   {
    return _id;
  }

  /**
   * Set the value of _proof
   * @param new_var the new value of _proof
   */
  void set_proof (void new_var)   {
      _proof = new_var;
  }

  /**
   * Get the value of _proof
   * @return the value of _proof
   */
  void get_proof ()   {
    return _proof;
  }
private:


  void initAttributes () ;

};

#endif // APPLICANT_DETAILS_H
