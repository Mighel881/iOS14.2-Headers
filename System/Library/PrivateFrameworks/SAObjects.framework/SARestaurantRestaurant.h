/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SALocalSearchBusiness2.h>

@class NSArray, NSURL;

@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (nonatomic,copy) NSArray * attributeSet; 
@property (nonatomic,copy) NSArray * makeReservationPunchOuts; 
@property (nonatomic,copy) NSURL * menuLink; 
@property (nonatomic,copy) NSArray * openings; 
@property (nonatomic,copy) NSArray * orderDeliveryPunchOuts; 
+(id)restaurant;
+(id)restaurantWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setMakeReservationPunchOuts:(NSArray *)arg1 ;
-(NSArray *)orderDeliveryPunchOuts;
-(void)setOrderDeliveryPunchOuts:(NSArray *)arg1 ;
-(void)setAttributeSet:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)attributeSet;
-(NSURL *)menuLink;
-(NSArray *)openings;
-(NSArray *)makeReservationPunchOuts;
-(void)setMenuLink:(NSURL *)arg1 ;
-(void)setOpenings:(NSArray *)arg1 ;
@end
