/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double verticalAccuracy; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (nonatomic,copy) NSNumber * age; 
@property (assign,nonatomic) double altitude; 
@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (assign,nonatomic) double direction; 
@property (nonatomic,copy) NSNumber * preciseLocationEnabled; 
@property (assign,nonatomic) double speed; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setRequestOrigin;
+(id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)preciseLocationEnabled;
-(void)setHorizontalAccuracy:(double)arg1 ;
-(id)groupIdentifier;
-(double)speed;
-(double)altitude;
-(double)latitude;
-(double)direction;
-(void)setDesiredAccuracy:(NSString *)arg1 ;
-(void)setVerticalAccuracy:(double)arg1 ;
-(NSString *)desiredAccuracy;
-(NSString *)status;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setSpeed:(double)arg1 ;
-(void)setDirection:(double)arg1 ;
-(void)setPreciseLocationEnabled:(NSNumber *)arg1 ;
-(double)horizontalAccuracy;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(void)setAltitude:(double)arg1 ;
-(void)setStatus:(NSString *)arg1 ;
-(NSNumber *)age;
-(double)longitude;
-(double)verticalAccuracy;
-(void)setAge:(NSNumber *)arg1 ;
@end
