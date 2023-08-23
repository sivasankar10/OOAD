
#ifndef LOAN_APPLICANT_H
#define LOAN_APPLICANT_H

#include <string>

/**
  * class loan_applicant
  * 
  */

class loan_applicant
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  loan_applicant ();

  /**
   * Empty Destructor
   */
  virtual ~loan_applicant ();

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
  void _check_up ()
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
  void _id_proof;
  void _document;
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
   * Set the value of _id_proof
   * @param new_var the new value of _id_proof
   */
  void set_id_proof (void new_var)   {
      _id_proof = new_var;
  }

  /**
   * Get the value of _id_proof
   * @return the value of _id_proof
   */
  void get_id_proof ()   {
    return _id_proof;
  }

  /**
   * Set the value of _document
   * @param new_var the new value of _document
   */
  void set_document (void new_var)   {
      _document = new_var;
  }

  /**
   * Get the value of _document
   * @return the value of _document
   */
  void get_document ()   {
    return _document;
  }
private:


  void initAttributes () ;

};

#endif // LOAN_APPLICANT_H
