/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INRentalCar, INDateComponentsRange, CLPlacemark;

@interface INRentalCarReservation : INReservation <NSCopying, NSSecureCoding> {

	INRentalCar* _rentalCar;
	INDateComponentsRange* _rentalDuration;
	CLPlacemark* _pickupLocation;
	CLPlacemark* _dropOffLocation;

}

@property (nonatomic,copy,readonly) INRentalCar * rentalCar;                             //@synthesize rentalCar=_rentalCar - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * rentalDuration;              //@synthesize rentalDuration=_rentalDuration - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * pickupLocation;                        //@synthesize pickupLocation=_pickupLocation - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * dropOffLocation;                       //@synthesize dropOffLocation=_dropOffLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 rentalCar:(id)arg8 rentalDuration:(id)arg9 pickupLocation:(id)arg10 dropOffLocation:(id)arg11 ;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 rentalCar:(id)arg7 rentalDuration:(id)arg8 pickupLocation:(id)arg9 dropOffLocation:(id)arg10 ;
-(id)_dictionaryRepresentation;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_duration;
-(INRentalCar *)rentalCar;
-(INDateComponentsRange *)rentalDuration;
-(CLPlacemark *)dropOffLocation;
-(CLPlacemark *)pickupLocation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
