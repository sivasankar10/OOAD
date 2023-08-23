
#ifndef CANDIDATE_H
#define CANDIDATE_H

#include <string>

/**
  * class candidate
  * 
  */

class candidate
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  candidate ();

  /**
   * Empty Destructor
   */
  virtual ~candidate ();

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
  void submit_nomination ()
  {
  }


  /**
   */
  void cancel_nomination ()
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

  void card_name;
  void party_symbol;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of card_name
   * @param new_var the new value of card_name
   */
  void setCard_name (void new_var)   {
      card_name = new_var;
  }

  /**
   * Get the value of card_name
   * @return the value of card_name
   */
  void getCard_name ()   {
    return card_name;
  }

  /**
   * Set the value of party_symbol
   * @param new_var the new value of party_symbol
   */
  void setParty_symbol (void new_var)   {
      party_symbol = new_var;
  }

  /**
   * Get the value of party_symbol
   * @return the value of party_symbol
   */
  void getParty_symbol ()   {
    return party_symbol;
  }
private:


  void initAttributes () ;

};

#endif // CANDIDATE_H
