/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FMF/FMFBaseCmd.h>

@class NSArray, NSString, CLLocation, NSNumber;

@interface GetLocationsCmd : FMFBaseCmd {

	NSArray* friends;
	NSArray* emails;
	NSString* proximity;
	CLLocation* currentLocation;
	CLLocation* requestedLocation;
	NSString* requestedLocationLabel;
	NSNumber* atRequestedLocation;
	NSString* clientId;

}

@property (nonatomic,copy) NSArray * emails; 
@property (nonatomic,copy) CLLocation * currentLocation; 
@property (nonatomic,copy) CLLocation * requestedLocation; 
@property (nonatomic,copy) NSString * requestedLocationLabel; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSString * clientId; 
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(NSArray *)friends;
-(NSString *)proximity;
-(id)headers;
-(void)setEmails:(NSArray *)arg1 ;
-(NSNumber *)atRequestedLocation;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(CLLocation *)requestedLocation;
-(void)setRequestedLocation:(CLLocation *)arg1 ;
-(void)setProximity:(NSString *)arg1 ;
-(NSArray *)emails;
-(void)setClientId:(NSString *)arg1 ;
-(id)result;
-(id)path;
-(NSString *)clientId;
-(id)jsonBodyDictionary;
-(void)setRequestedLocationLabel:(NSString *)arg1 ;
-(id)allFriendsHandles;
-(id)currentLocationDictionary;
-(id)requestedLocationDictionary;
-(NSString *)requestedLocationLabel;
-(id)friendForHandle:(id)arg1 ;
@end

