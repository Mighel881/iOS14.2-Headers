/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface EKPersistentChangeStoreInfo : NSObject {

	int _minConsumedSequenceNumber;
	int _secondMinConsumedSequenceNumber;
	NSString* _minConsumedClientIdentifier;

}

@property (assign,nonatomic) int minConsumedSequenceNumber;                       //@synthesize minConsumedSequenceNumber=_minConsumedSequenceNumber - In the implementation block
@property (nonatomic,retain) NSString * minConsumedClientIdentifier;              //@synthesize minConsumedClientIdentifier=_minConsumedClientIdentifier - In the implementation block
@property (assign,nonatomic) int secondMinConsumedSequenceNumber;                 //@synthesize secondMinConsumedSequenceNumber=_secondMinConsumedSequenceNumber - In the implementation block
-(NSString *)minConsumedClientIdentifier;
-(int)minConsumedSequenceNumber;
-(int)secondMinConsumedSequenceNumber;
-(void)setMinConsumedSequenceNumber:(int)arg1 ;
-(void)setMinConsumedClientIdentifier:(NSString *)arg1 ;
-(void)setSecondMinConsumedSequenceNumber:(int)arg1 ;
-(id)description;
@end
