/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGraphicsRendererFormat.h>

@class NSDictionary, NSURL, NSMutableData;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat {

	NSDictionary* _documentInfo;
	NSURL* _outputURL;
	NSMutableData* _pdfData;

}

@property (retain) NSURL * outputURL;                                //@synthesize outputURL=_outputURL - In the implementation block
@property (retain) NSMutableData * pdfData;                          //@synthesize pdfData=_pdfData - In the implementation block
@property (nonatomic,copy) NSDictionary * documentInfo;              //@synthesize documentInfo=_documentInfo - In the implementation block
-(void)setDocumentInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)documentInfo;
-(void)setPdfData:(NSMutableData *)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSMutableData *)pdfData;
-(NSURL *)outputURL;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

