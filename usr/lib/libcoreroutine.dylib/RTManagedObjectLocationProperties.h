/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface RTManagedObjectLocationProperties : NSObject {

	NSArray* _latitudePropertyPath;
	NSArray* _longitudePropertyPath;
	NSArray* _referenceFramePropertyPath;

}

@property (nonatomic,retain) NSArray * latitudePropertyPath;                    //@synthesize latitudePropertyPath=_latitudePropertyPath - In the implementation block
@property (nonatomic,retain) NSArray * longitudePropertyPath;                   //@synthesize longitudePropertyPath=_longitudePropertyPath - In the implementation block
@property (nonatomic,retain) NSArray * referenceFramePropertyPath;              //@synthesize referenceFramePropertyPath=_referenceFramePropertyPath - In the implementation block
-(void)setLatitudePropertyPath:(NSArray *)arg1 ;
-(void)setLongitudePropertyPath:(NSArray *)arg1 ;
-(void)setReferenceFramePropertyPath:(NSArray *)arg1 ;
-(id)initWithLatitudePropertyPath:(id)arg1 longitudePropertyPath:(id)arg2 referenceFramePropertyPath:(id)arg3 ;
-(NSArray *)longitudePropertyPath;
-(NSArray *)referenceFramePropertyPath;
-(NSArray *)latitudePropertyPath;
@end

