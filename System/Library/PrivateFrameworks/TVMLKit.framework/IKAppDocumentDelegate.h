/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IKAppDocumentDelegate <NSObject>
@optional
-(void)document:(id)arg1 runTestWithName:(id)arg2 options:(id)arg3;
-(void)documentScrollToTop:(id)arg1;
-(id)impressionableViewElementsForDocument:(id)arg1;
-(BOOL)document:(id)arg1 evaluateStyleMediaQuery:(id)arg2;

@required
-(void)documentDidUpdate:(id)arg1;
-(void)documentNeedsUpdate:(id)arg1;

@end
