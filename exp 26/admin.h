
#ifndef ADMIN_H
#define ADMIN_H

#include <string>

/**
  * class admin
  * 
  */

class admin
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  admin ();

  /**
   * Empty Destructor
   */
  virtual ~admin ();

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
  void submit_report ()
  {
  }


  /**
   */
  void vote_no ()
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

  void voter_ID;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of voter_ID
   * @param new_var the new value of voter_ID
   */
  void setVoter_ID (void new_var)   {
      voter_ID = new_var;
  }

  /**
   * Get the value of voter_ID
   * @return the value of voter_ID
   */
  void getVoter_ID ()   {
    return voter_ID;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H
