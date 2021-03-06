/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataDetectorsUI/DDPreviewAction.h>
#import <libobjc.A.dylib/DDParsecCollectionDelegate.h>

@class DDParsecCollectionViewController;

@interface DDParsecAction : DDPreviewAction <DDParsecCollectionDelegate> {

	DDParsecCollectionViewController* _parsecViewController;
	BOOL _previewMode;

}
-(id)localizedName;
-(int)interactionType;
-(id)createViewController;
-(void)dismissParsecCollection:(id)arg1 ;
@end

