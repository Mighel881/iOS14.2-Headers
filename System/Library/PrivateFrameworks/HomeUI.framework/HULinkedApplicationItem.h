/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItem.h>

@class NSSet, NSString;

@interface HULinkedApplicationItem : HFItem {

	NSSet* _associatedAccessories;

}

@property (nonatomic,retain) NSSet * associatedAccessories;              //@synthesize associatedAccessories=_associatedAccessories - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
-(id)init;
-(NSString *)bundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NSSet *)associatedAccessories;
-(int)_iconVariantForScale:(double)arg1 ;
-(id)_failedUpdateOutcome;
-(void)setAssociatedAccessories:(NSSet *)arg1 ;
@end
