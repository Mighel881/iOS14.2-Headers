/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOrderedSet;

@interface PKIntersectionResult : NSObject {

	NSOrderedSet* _intersectedStrokes;
	long long _intersectionAlgorithmType;
	long long _contentType;

}

@property (nonatomic,retain) NSOrderedSet * intersectedStrokes;                //@synthesize intersectedStrokes=_intersectedStrokes - In the implementation block
@property (assign,nonatomic) long long intersectionAlgorithmType;              //@synthesize intersectionAlgorithmType=_intersectionAlgorithmType - In the implementation block
@property (assign,nonatomic) long long contentType;                            //@synthesize contentType=_contentType - In the implementation block
+(id)noResult;
-(void)setContentType:(long long)arg1 ;
-(long long)contentType;
-(void)setIntersectionAlgorithmType:(long long)arg1 ;
-(void)setIntersectedStrokes:(NSOrderedSet *)arg1 ;
-(long long)intersectionAlgorithmType;
-(NSOrderedSet *)intersectedStrokes;
@end
