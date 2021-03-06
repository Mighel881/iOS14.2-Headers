/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClassroomKit/CRKSession.h>
#import <libobjc.A.dylib/CATRemoteConnectionDelegate.h>

@class DMFControlSessionIdentifier, NSDate, NSString;

@interface CRKClassSession : CRKSession <CATRemoteConnectionDelegate> {

	unsigned short _flags;
	DMFControlSessionIdentifier* _identifier;
	NSDate* _lastBeaconFoundDate;

}

@property (assign,nonatomic) unsigned short flags;                                    //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSDate * lastBeaconFoundDate;                            //@synthesize lastBeaconFoundDate=_lastBeaconFoundDate - In the implementation block
@property (nonatomic,readonly) DMFControlSessionIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned short)flags;
-(DMFControlSessionIdentifier *)identifier;
-(void)setFlags:(unsigned short)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)stateDictionary;
-(void)logBeaconFound;
-(id)lastMatchMessageForCurrentDate:(id)arg1 ;
-(void)setLastBeaconFoundDate:(NSDate *)arg1 ;
-(void)lostBeacon;
-(NSDate *)lastBeaconFoundDate;
-(void)foundBeaconWithFlags:(unsigned short)arg1 ;
@end

