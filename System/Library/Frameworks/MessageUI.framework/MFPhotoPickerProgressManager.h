/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface MFPhotoPickerProgressManager : NSObject {

	NSMutableDictionary* _progressItems;

}

@property (nonatomic,readonly) NSMutableDictionary * progressItems;              //@synthesize progressItems=_progressItems - In the implementation block
-(id)init;
-(double)progressForIndexPath:(id)arg1 ;
-(BOOL)requestExistsForIndexPath:(id)arg1 ;
-(void)setProgress:(double)arg1 forIndexPath:(id)arg2 ;
-(void)setExportSession:(id)arg1 forIndexPath:(id)arg2 ;
-(void)cancelEverythingAtIndexPath:(id)arg1 ;
-(void)setImageRequestID:(int)arg1 forIndexPath:(id)arg2 ;
-(NSMutableDictionary *)progressItems;
-(void)_cancelProgressItem:(id)arg1 ;
-(BOOL)anyRequestExists;
-(void)cancelEverything;
@end

