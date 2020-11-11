/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIStatusBarItem.h>

@class NSString, _UIStatusBarStringView;

@interface _UIStatusBarNameItem : _UIStatusBarItem {

	NSString* _nameEntryKey;
	_UIStatusBarStringView* _nameView;

}

@property (nonatomic,readonly) NSString * nameEntryKey;                      //@synthesize nameEntryKey=_nameEntryKey - In the implementation block
@property (nonatomic,retain) _UIStatusBarStringView * nameView;              //@synthesize nameView=_nameView - In the implementation block
-(id)dependentEntryKeys;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setNameView:(_UIStatusBarStringView *)arg1 ;
-(void)_create_nameView;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(_UIStatusBarStringView *)nameView;
-(NSString *)nameEntryKey;
@end
