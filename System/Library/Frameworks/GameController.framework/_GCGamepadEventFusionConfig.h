/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GCGamepadEventFusionConfig : NSObject <NSSecureCoding> {

	unsigned long long _sourceCount;
	int* _matrix[41];

}

@property (nonatomic,readonly) unsigned long long sourceCount;              //@synthesize sourceCount=_sourceCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithSourceCount:(unsigned long long)arg1 ;
-(unsigned long long)sourceCount;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setPass:(BOOL)arg1 element:(long long)arg2 forSourceAtIndex:(unsigned long long)arg3 ;
-(BOOL)shouldPassElement:(long long)arg1 forSourceAtIndex:(unsigned long long)arg2 ;
-(void)enumeratePassedElementsForSourceAtIndex:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

