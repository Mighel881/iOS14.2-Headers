/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, INTermsAndConditions, NSArray;


@protocol INGetAvailableRestaurantReservationBookingsIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * localizedRestaurantDescriptionText; 
@property (nonatomic,copy) NSString * localizedBookingAdvisementText; 
@property (nonatomic,copy) INTermsAndConditions * termsAndConditions; 
@property (nonatomic,readonly) NSArray * availableBookings; 
@required
-(id)init;
-(NSString *)localizedBookingAdvisementText;
-(NSString *)localizedRestaurantDescriptionText;
-(void)setLocalizedRestaurantDescriptionText:(id)arg1;
-(INTermsAndConditions *)termsAndConditions;
-(void)setLocalizedBookingAdvisementText:(id)arg1;
-(void)setTermsAndConditions:(id)arg1;
-(NSArray *)availableBookings;
-(long long)code;

@end

