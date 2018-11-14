//
// Generated file, do not edit! Created by nedtool 5.4 from tictoc17.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __TICTOC17_M_H
#define __TICTOC17_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



class TicTocMsg17;
/**
 * Class generated from <tt>tictoc17.msg:16</tt> by nedtool.
 * <pre>
 * //
 * // Same as TictocMsg11
 * //
 * message TicTocMsg17
 * {
 *     int source;
 *     int destination;
 *     int hopCount = 0;
 * }
 * </pre>
 */
class TicTocMsg17 : public ::omnetpp::cMessage
{
  protected:
    int source = 0;
    int destination = 0;
    int hopCount = 0;

  private:
    void copy(const TicTocMsg17& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TicTocMsg17&);

  public:
    TicTocMsg17(const char *name=nullptr, short kind=0);
    TicTocMsg17(const TicTocMsg17& other);
    virtual ~TicTocMsg17();
    TicTocMsg17& operator=(const TicTocMsg17& other);
    virtual TicTocMsg17 *dup() const override {return new TicTocMsg17(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getSource() const;
    virtual void setSource(int source);
    virtual int getDestination() const;
    virtual void setDestination(int destination);
    virtual int getHopCount() const;
    virtual void setHopCount(int hopCount);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TicTocMsg17& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TicTocMsg17& obj) {obj.parsimUnpack(b);}

#endif // ifndef __TICTOC17_M_H

