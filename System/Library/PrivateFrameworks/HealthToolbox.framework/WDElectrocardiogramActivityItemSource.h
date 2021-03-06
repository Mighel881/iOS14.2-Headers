/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIActivityItemSource.h>

@class NSURL, NSString;

@interface WDElectrocardiogramActivityItemSource : NSObject <UIActivityItemSource> {

	NSURL* _pdfTemporaryFileURL;

}

@property (nonatomic,readonly) NSURL * pdfTemporaryFileURL;              //@synthesize pdfTemporaryFileURL=_pdfTemporaryFileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(void)dealloc;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)initWithPDFData:(id)arg1 sampleDate:(id)arg2 ;
-(NSURL *)pdfTemporaryFileURL;
@end

