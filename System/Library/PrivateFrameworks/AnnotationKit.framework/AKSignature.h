/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKDrawing, NSUUID, NSDate;

@interface AKSignature : NSObject <NSSecureCoding> {

	PKDrawing* _drawing;
	CGPathRef _path;
	CGRect _strokesBounds;
	BOOL _shouldPersist;
	NSUUID* _uniqueID;
	double _baselineOffset;
	NSDate* _creationDate;

}

@property (retain) NSUUID * uniqueID;                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign) double baselineOffset;              //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign) BOOL shouldPersist;                 //@synthesize shouldPersist=_shouldPersist - In the implementation block
@property (readonly) CGPathRef path; 
@property (readonly) CGRect pathBounds; 
@property (readonly) PKDrawing * drawing; 
+(BOOL)supportsSecureCoding;
-(id)initForTesting;
-(void)setPath:(CGPathRef)arg1 ;
-(id)init;
-(void)setBaselineOffset:(double)arg1 ;
-(void)setUniqueID:(NSUUID *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(double)baselineOffset;
-(PKDrawing *)drawing;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(NSDate *)creationDate;
-(NSUUID *)uniqueID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CGRect)pathBounds;
-(id)initWithDrawing:(id)arg1 path:(CGPathRef)arg2 baselineOffset:(double)arg3 creationDate:(id)arg4 ;
-(id)initWithDrawing:(id)arg1 path:(CGPathRef)arg2 baselineOffset:(double)arg3 ;
-(BOOL)shouldPersist;
-(void)setShouldPersist:(BOOL)arg1 ;
@end

