/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIFieldEditor.h>

@interface _UISearchBarFieldEditor : UIFieldEditor {

	struct {
		unsigned inLayoutSubviews : 1;
	}  _flags;

}
-(id)selectionRectsForRange:(id)arg1 ;
-(BOOL)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout CGRect*)arg2 lineFragmentUsedRect:(inout CGRect*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(NSRange)arg6 ;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3 ;
-(void)layoutSubviews;
-(CGRect)_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2 ;
-(void)deactivateEditorDiscardingEdits:(BOOL)arg1 ;
-(void)activateEditor;
-(void)_updateTokenViews;
@end

