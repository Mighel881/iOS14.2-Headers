/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IKAppNavigationController <NSObject>
@optional
-(void)clear;
-(void)dismissModal;
-(void)setDocuments:(id)arg1 options:(id)arg2;
-(void)presentModal:(id)arg1 options:(id)arg2;

@required
-(id)documents;
-(void)removeDocument:(id)arg1;
-(void)popToDocument:(id)arg1;
-(void)pushDocument:(id)arg1 options:(id)arg2;
-(void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
-(void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
-(void)popDocument;
-(void)popToRootDocument;

@end

