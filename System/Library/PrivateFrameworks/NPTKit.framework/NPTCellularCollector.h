/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@class NSDictionary, NSArray, CoreTelephonyClient, CTXPCServiceSubscriptionContext, NSNumber, CTDataStatus, NSMutableArray, NSMutableDictionary, NSString;

@interface NPTCellularCollector : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {

	NSDictionary* _metadata;
	NSArray* _cellChanges;
	NSArray* _dataStatusChanges;
	CoreTelephonyClient* _ctClient;
	CTXPCServiceSubscriptionContext* _context;
	NSNumber* _slotID;
	CTDataStatus* _dataStatus;
	NSMutableArray* _mutableCellChanges;
	NSMutableArray* _mutableDataStatusChanges;
	NSMutableDictionary* _servingCellInfo;
	NSMutableDictionary* _mutableMetadata;

}

@property (nonatomic,retain) CoreTelephonyClient * ctClient;                         //@synthesize ctClient=_ctClient - In the implementation block
@property (nonatomic,retain) CTXPCServiceSubscriptionContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSNumber * slotID;                                      //@synthesize slotID=_slotID - In the implementation block
@property (nonatomic,retain) CTDataStatus * dataStatus;                              //@synthesize dataStatus=_dataStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableCellChanges;                    //@synthesize mutableCellChanges=_mutableCellChanges - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableDataStatusChanges;              //@synthesize mutableDataStatusChanges=_mutableDataStatusChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * servingCellInfo;                  //@synthesize servingCellInfo=_servingCellInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableMetadata;                  //@synthesize mutableMetadata=_mutableMetadata - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * cellChanges;                                  //@synthesize cellChanges=_cellChanges - In the implementation block
@property (nonatomic,retain) NSArray * dataStatusChanges;                            //@synthesize dataStatusChanges=_dataStatusChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getPreferredDataSlot;
+(id)cellularCollectorForPreferredDataSlot;
-(NSNumber *)slotID;
-(void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(CTXPCServiceSubscriptionContext *)context;
-(void)cellChanged:(id)arg1 cell:(id)arg2 ;
-(void)setDataStatus:(CTDataStatus *)arg1 ;
-(void)setSlotID:(NSNumber *)arg1 ;
-(void)setContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(CTDataStatus *)dataStatus;
-(CoreTelephonyClient *)ctClient;
-(void)setCtClient:(CoreTelephonyClient *)arg1 ;
-(id)initWithSlotID:(id)arg1 ;
-(NSMutableDictionary *)mutableMetadata;
-(id)dualSimStatus;
-(id)getCellInfoForSlot:(id)arg1 ;
-(id)signalStrengthMeasurements;
-(void)setMutableMetadata:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)mutableDataStatusChanges;
-(NSMutableDictionary *)servingCellInfo;
-(NSMutableArray *)mutableCellChanges;
-(void)refreshMetadataWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)cellChanges;
-(NSArray *)dataStatusChanges;
-(void)setCellChanges:(NSArray *)arg1 ;
-(void)setDataStatusChanges:(NSArray *)arg1 ;
-(void)setMutableCellChanges:(NSMutableArray *)arg1 ;
-(void)setMutableDataStatusChanges:(NSMutableArray *)arg1 ;
-(void)setServingCellInfo:(NSMutableDictionary *)arg1 ;
@end
