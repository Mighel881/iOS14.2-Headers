/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKTransitAppletState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSData, NSString;

@interface PKFelicaTransitAppletState : PKTransitAppletState <NSCopying> {

	BOOL _shinkansenTicketActive;
	BOOL _greenCarTicketUsed;
	BOOL _balanceAllowedForCommute;
	BOOL _lowBalanceNotificationEnabled;
	BOOL _hasShinkansenTicket;
	BOOL _hasGreenCarTicket;
	NSNumber* _shinkansenValidityStartDate;
	NSNumber* _shinkansenValidityTerm;
	NSData* _shinkansenOriginStationCode;
	NSData* _shinkansenDestinationStationCode;
	NSNumber* _shinkansenDepartureTime;
	NSNumber* _shinkansenArrivalTime;
	NSString* _shinkansenTrainName;
	NSNumber* _shinkansenCarNumber;
	NSNumber* _shinkansenSeatRow;
	NSNumber* _shinkansenSeatNumber;
	NSData* _shinkansenSecondaryOriginStationCode;
	NSData* _shinkansenSecondaryDestinationStationCode;
	NSNumber* _shinkansenSecondaryDepartureTime;
	NSNumber* _shinkansenSecondaryArrivalTime;
	NSString* _shinkansenSecondaryTrainName;
	NSNumber* _shinkansenSecondaryCarNumber;
	NSNumber* _shinkansenSecondarySeatRow;
	NSNumber* _shinkansenSecondarySeatNumber;
	NSData* _greenCarOriginStationCode;
	NSData* _greenCarDestinationStationCode;
	NSNumber* _greenCarValidityStartDate;
	NSString* _shinkansenOriginStationString;
	NSString* _shinkansenDestinationStationString;
	NSString* _shinkansenSecondaryOriginStationString;
	NSString* _shinkansenSecondaryDestinationStationString;
	NSString* _greenCarOriginStationString;
	NSString* _greenCarDestinationStationString;

}

@property (assign,getter=isShinkansenTicketActive,nonatomic) BOOL shinkansenTicketActive;                            //@synthesize shinkansenTicketActive=_shinkansenTicketActive - In the implementation block
@property (assign,getter=isGreenCarTicketUsed,nonatomic) BOOL greenCarTicketUsed;                                    //@synthesize greenCarTicketUsed=_greenCarTicketUsed - In the implementation block
@property (assign,getter=isBalanceAllowedForCommute,nonatomic) BOOL balanceAllowedForCommute;                        //@synthesize balanceAllowedForCommute=_balanceAllowedForCommute - In the implementation block
@property (assign,getter=isLowBalanceNotificationEnabled,nonatomic) BOOL lowBalanceNotificationEnabled;              //@synthesize lowBalanceNotificationEnabled=_lowBalanceNotificationEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenValidityStartDate;                                                   //@synthesize shinkansenValidityStartDate=_shinkansenValidityStartDate - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenValidityTerm;                                                        //@synthesize shinkansenValidityTerm=_shinkansenValidityTerm - In the implementation block
@property (nonatomic,copy) NSData * shinkansenOriginStationCode;                                                     //@synthesize shinkansenOriginStationCode=_shinkansenOriginStationCode - In the implementation block
@property (nonatomic,copy) NSData * shinkansenDestinationStationCode;                                                //@synthesize shinkansenDestinationStationCode=_shinkansenDestinationStationCode - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenDepartureTime;                                                       //@synthesize shinkansenDepartureTime=_shinkansenDepartureTime - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenArrivalTime;                                                         //@synthesize shinkansenArrivalTime=_shinkansenArrivalTime - In the implementation block
@property (nonatomic,copy) NSString * shinkansenTrainName;                                                           //@synthesize shinkansenTrainName=_shinkansenTrainName - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenCarNumber;                                                           //@synthesize shinkansenCarNumber=_shinkansenCarNumber - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSeatNumber;                                                          //@synthesize shinkansenSeatNumber=_shinkansenSeatNumber - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSeatRow;                                                             //@synthesize shinkansenSeatRow=_shinkansenSeatRow - In the implementation block
@property (nonatomic,copy) NSData * shinkansenSecondaryOriginStationCode;                                            //@synthesize shinkansenSecondaryOriginStationCode=_shinkansenSecondaryOriginStationCode - In the implementation block
@property (nonatomic,copy) NSData * shinkansenSecondaryDestinationStationCode;                                       //@synthesize shinkansenSecondaryDestinationStationCode=_shinkansenSecondaryDestinationStationCode - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondaryDepartureTime;                                              //@synthesize shinkansenSecondaryDepartureTime=_shinkansenSecondaryDepartureTime - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondaryArrivalTime;                                                //@synthesize shinkansenSecondaryArrivalTime=_shinkansenSecondaryArrivalTime - In the implementation block
@property (nonatomic,copy) NSString * shinkansenSecondaryTrainName;                                                  //@synthesize shinkansenSecondaryTrainName=_shinkansenSecondaryTrainName - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondaryCarNumber;                                                  //@synthesize shinkansenSecondaryCarNumber=_shinkansenSecondaryCarNumber - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondarySeatRow;                                                    //@synthesize shinkansenSecondarySeatRow=_shinkansenSecondarySeatRow - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondarySeatNumber;                                                 //@synthesize shinkansenSecondarySeatNumber=_shinkansenSecondarySeatNumber - In the implementation block
@property (nonatomic,copy) NSData * greenCarOriginStationCode;                                                       //@synthesize greenCarOriginStationCode=_greenCarOriginStationCode - In the implementation block
@property (nonatomic,copy) NSData * greenCarDestinationStationCode;                                                  //@synthesize greenCarDestinationStationCode=_greenCarDestinationStationCode - In the implementation block
@property (nonatomic,copy) NSNumber * greenCarValidityStartDate;                                                     //@synthesize greenCarValidityStartDate=_greenCarValidityStartDate - In the implementation block
@property (assign,nonatomic) BOOL hasGreenCarTicket;                                                                 //@synthesize hasGreenCarTicket=_hasGreenCarTicket - In the implementation block
@property (assign,nonatomic) BOOL hasShinkansenTicket;                                                               //@synthesize hasShinkansenTicket=_hasShinkansenTicket - In the implementation block
@property (nonatomic,copy) NSString * shinkansenOriginStationString;                                                 //@synthesize shinkansenOriginStationString=_shinkansenOriginStationString - In the implementation block
@property (nonatomic,copy) NSString * shinkansenDestinationStationString;                                            //@synthesize shinkansenDestinationStationString=_shinkansenDestinationStationString - In the implementation block
@property (nonatomic,copy) NSString * shinkansenSecondaryOriginStationString;                                        //@synthesize shinkansenSecondaryOriginStationString=_shinkansenSecondaryOriginStationString - In the implementation block
@property (nonatomic,copy) NSString * shinkansenSecondaryDestinationStationString;                                   //@synthesize shinkansenSecondaryDestinationStationString=_shinkansenSecondaryDestinationStationString - In the implementation block
@property (nonatomic,copy) NSString * greenCarOriginStationString;                                                   //@synthesize greenCarOriginStationString=_greenCarOriginStationString - In the implementation block
@property (nonatomic,copy) NSString * greenCarDestinationStationString;                                              //@synthesize greenCarDestinationStationString=_greenCarDestinationStationString - In the implementation block
@property (getter=isInShinkansenStation,nonatomic,readonly) BOOL inShinkansenStation; 
+(BOOL)supportsSecureCoding;
-(void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id*)arg4 ephemeralTransaction:(id*)arg5 ;
-(id)_concreteTransactionForRecordAtIndex:(unsigned long long)arg1 withBalance:(unsigned*)arg2 historyRecords:(id)arg3 terminalState:(id)arg4 numberProcessed:(unsigned long long*)arg5 exitedShinkansen:(BOOL*)arg6 ;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg1 ;
-(NSNumber *)shinkansenValidityStartDate;
-(NSNumber *)shinkansenValidityTerm;
-(NSNumber *)shinkansenDepartureTime;
-(NSNumber *)shinkansenArrivalTime;
-(NSNumber *)shinkansenSeatRow;
-(NSString *)shinkansenTrainName;
-(NSNumber *)shinkansenCarNumber;
-(NSNumber *)shinkansenSeatNumber;
-(NSNumber *)shinkansenSecondaryDepartureTime;
-(BOOL)hasShinkansenTicket;
-(NSNumber *)shinkansenSecondaryArrivalTime;
-(NSString *)shinkansenSecondaryTrainName;
-(NSNumber *)shinkansenSecondaryCarNumber;
-(NSNumber *)shinkansenSecondarySeatRow;
-(NSNumber *)shinkansenSecondarySeatNumber;
-(NSNumber *)greenCarValidityStartDate;
-(BOOL)hasGreenCarTicket;
-(NSString *)shinkansenOriginStationString;
-(NSString *)shinkansenDestinationStationString;
-(NSString *)shinkansenSecondaryOriginStationString;
-(NSString *)greenCarOriginStationString;
-(NSString *)shinkansenSecondaryDestinationStationString;
-(NSString *)greenCarDestinationStationString;
-(id)init;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 balanceLabelDictionary:(id)arg5 unitDictionary:(id)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isInStation;
-(BOOL)isInShinkansenStation;
-(void)setGreenCarTicketUsed:(BOOL)arg1 ;
-(void)setShinkansenTicketActive:(BOOL)arg1 ;
-(void)setBalanceAllowedForCommute:(BOOL)arg1 ;
-(void)setLowBalanceNotificationEnabled:(BOOL)arg1 ;
-(void)setShinkansenSeatRow:(NSNumber *)arg1 ;
-(void)setShinkansenValidityStartDate:(NSNumber *)arg1 ;
-(void)setShinkansenValidityTerm:(NSNumber *)arg1 ;
-(void)setShinkansenOriginStationCode:(NSData *)arg1 ;
-(void)setShinkansenTrainName:(NSString *)arg1 ;
-(void)setShinkansenDestinationStationCode:(NSData *)arg1 ;
-(void)setShinkansenDepartureTime:(NSNumber *)arg1 ;
-(void)setShinkansenArrivalTime:(NSNumber *)arg1 ;
-(void)setShinkansenCarNumber:(NSNumber *)arg1 ;
-(void)setShinkansenSeatNumber:(NSNumber *)arg1 ;
-(void)setShinkansenSecondaryOriginStationCode:(NSData *)arg1 ;
-(void)setShinkansenSecondaryDestinationStationCode:(NSData *)arg1 ;
-(void)setShinkansenSecondaryDepartureTime:(NSNumber *)arg1 ;
-(void)setShinkansenSecondaryArrivalTime:(NSNumber *)arg1 ;
-(void)setShinkansenSecondaryTrainName:(NSString *)arg1 ;
-(void)setShinkansenSecondaryCarNumber:(NSNumber *)arg1 ;
-(void)setShinkansenSecondarySeatRow:(NSNumber *)arg1 ;
-(void)setShinkansenSecondarySeatNumber:(NSNumber *)arg1 ;
-(void)setGreenCarOriginStationCode:(NSData *)arg1 ;
-(void)setGreenCarDestinationStationCode:(NSData *)arg1 ;
-(void)setGreenCarValidityStartDate:(NSNumber *)arg1 ;
-(void)setHasShinkansenTicket:(BOOL)arg1 ;
-(void)setHasGreenCarTicket:(BOOL)arg1 ;
-(void)setShinkansenOriginStationString:(NSString *)arg1 ;
-(BOOL)isShinkansenTicketActive;
-(void)dealloc;
-(void)setShinkansenDestinationStationString:(NSString *)arg1 ;
-(void)setShinkansenSecondaryOriginStationString:(NSString *)arg1 ;
-(void)setGreenCarOriginStationString:(NSString *)arg1 ;
-(void)setShinkansenSecondaryDestinationStationString:(NSString *)arg1 ;
-(void)setGreenCarDestinationStationString:(NSString *)arg1 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 ;
-(BOOL)isGreenCarTicketUsed;
-(BOOL)isBalanceAllowedForCommute;
-(BOOL)isLowBalanceNotificationEnabled;
-(NSData *)shinkansenOriginStationCode;
-(NSData *)shinkansenDestinationStationCode;
-(NSData *)shinkansenSecondaryOriginStationCode;
-(NSData *)shinkansenSecondaryDestinationStationCode;
-(NSData *)greenCarOriginStationCode;
-(NSData *)greenCarDestinationStationCode;
@end
