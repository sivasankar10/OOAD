
#ifndef BANK_APPLICANT_H
#define BANK_APPLICANT_H

#include <string>

/**
  * class bank_applicant
  * 
  */

class bank_applicant
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  bank_applicant ();

  /**
   * Empty Destructor
   */
  virtual ~bank_applicant ();

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
  void _create ()
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

  void _proof;
  void _documents;
  void _verification;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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

  /**
   * Set the value of _documents
   * @param new_var the new value of _documents
   */
  void set_documents (void new_var)   {
      _documents = new_var;
  }

  /**
   * Get the value of _documents
   * @return the value of _documents
   */
  void get_documents ()   {
    return _documents;
  }

  /**
   * Set the value of _verification
   * @param new_var the new value of _verification
   */
  void set_verification (void new_var)   {
      _verification = new_var;
  }

  /**
   * Get the value of _verification
   * @return the value of _verification
   */
  void get_verification ()   {
    return _verification;
  }
private:


  void initAttributes () ;

};

#endif // BANK_APPLICANT_H
