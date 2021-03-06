/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXAutoPlacementLayout.h>

@protocol SXEdgeSpacing;
@class NSString;

@interface SXDebugAdLayout : NSObject <SXAutoPlacementLayout> {

	id<SXEdgeSpacing> _margin;

}

@property (nonatomic,readonly) id<SXEdgeSpacing> margin;              //@synthesize margin=_margin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXEdgeSpacing>)margin;
-(id)initWithMargin:(SXConvertibleValue)arg1 ;
@end

