/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
@class NSNumber, NSPConnectionInfo, NSDate;

@interface NPDirectFlow : NSObject {

	nw_protocol* _protocol;
	NSNumber* _identifier;
	NSPConnectionInfo* _connectionInfo;
	NSDate* _startDate;
	NSDate* _connectionStartDate;
	NSDate* _firstTxByteTimestamp;

}

@property (readonly) NSNumber * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) nw_protocol* protocol; 
@property (retain) NSPConnectionInfo * connectionInfo;              //@synthesize connectionInfo=_connectionInfo - In the implementation block
@property (readonly) NSDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * connectionStartDate;                    //@synthesize connectionStartDate=_connectionStartDate - In the implementation block
@property (retain) NSDate * firstTxByteTimestamp;                   //@synthesize firstTxByteTimestamp=_firstTxByteTimestamp - In the implementation block
+(void)initializeProtocol;
-(void)handleDetachedFromProtocol;
-(nw_protocol*)protocol;
-(id)initWithParameters:(id)arg1 ;
-(NSNumber *)identifier;
-(NSDate *)startDate;
-(NSPConnectionInfo *)connectionInfo;
-(void)setConnectionInfo:(NSPConnectionInfo *)arg1 ;
-(NSDate *)firstTxByteTimestamp;
-(NSDate *)connectionStartDate;
-(void)createConnectionInfo;
-(void)setConnectionStartDate:(NSDate *)arg1 ;
-(void)setFirstTxByteTimestamp:(NSDate *)arg1 ;
@end
