/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UISearchField.h>
#import <libobjc.A.dylib/SUDeferredUIView.h>

@class NSString;

@interface SUDeferredUISearchField : UISearchField <SUDeferredUIView> {

	long long _deferredClearButtonMode;
	id _deferredFont;
	CGRect _deferredFrame;
	float _deferredPaddingLeft;
	float _deferredPaddingTop;
	NSString* _deferredPlaceholder;
	NSString* _deferredText;
	BOOL _isDeferringInterfaceUpdates;

}

@property (assign,getter=isDeferringInterfaceUpdates,nonatomic) BOOL deferringInterfaceUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(id)font;
-(id)text;
-(float)paddingLeft;
-(CGRect)frame;
-(void)setClearButtonMode:(long long)arg1 ;
-(long long)clearButtonMode;
-(void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2 ;
-(float)paddingTop;
-(id)placeholder;
-(void)dealloc;
-(BOOL)isDeferringInterfaceUpdates;
-(void)setDeferringInterfaceUpdates:(BOOL)arg1 ;
-(void)_saveCurrentStateAsDeferred;
-(void)_commitDeferredInterfaceUpdates;
@end
