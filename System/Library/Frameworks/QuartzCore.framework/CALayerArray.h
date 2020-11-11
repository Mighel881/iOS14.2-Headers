/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <QuartzCore/QuartzCore-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface CALayerArray : NSArray {

	CALayerArrayIvars* _ivars;

}
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CA29*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithLayers:(id*)arg1 count:(unsigned long long)arg2 retain:(BOOL)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)getObjects:(id*)arg1 ;
@end
