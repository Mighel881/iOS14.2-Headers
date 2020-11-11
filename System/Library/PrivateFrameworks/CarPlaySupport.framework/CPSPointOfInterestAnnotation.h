/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, CPPointOfInterest;

@interface CPSPointOfInterestAnnotation : NSObject <MKAnnotation> {

	CPPointOfInterest* _pointOfInterest;

}

@property (nonatomic,readonly) CPPointOfInterest * pointOfInterest;              //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocationCoordinate2D)coordinate;
-(NSString *)subtitle;
-(CPPointOfInterest *)pointOfInterest;
-(NSString *)description;
-(NSString *)title;
-(id)initWithPointOfInterest:(id)arg1 ;
@end
