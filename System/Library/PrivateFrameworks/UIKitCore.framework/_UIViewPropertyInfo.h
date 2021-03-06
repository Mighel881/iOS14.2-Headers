/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UIVectorOperatable;
@interface _UIViewPropertyInfo : NSObject <NSCopying> {

	id<UIVectorOperatable> _previousValue;
	id<UIVectorOperatable> _value;

}

@property (nonatomic,retain) id<UIVectorOperatable> previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
@property (nonatomic,retain) id<UIVectorOperatable> value;                      //@synthesize value=_value - In the implementation block
+(id)viewPropertyInfoWithValue:(id)arg1 previousValue:(id)arg2 ;
-(id<UIVectorOperatable>)value;
-(void)setValue:(id<UIVectorOperatable>)arg1 ;
-(void)setPreviousValue:(id<UIVectorOperatable>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<UIVectorOperatable>)previousValue;
@end

