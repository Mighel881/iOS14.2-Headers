/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKDynamicProvisioningPageContent.h>

@class NSArray;

@interface PKApplyDocumentUploadPage : PKDynamicProvisioningPageContent {

	NSArray* _acceptableDocuments;

}

@property (nonatomic,retain) NSArray * acceptableDocuments;              //@synthesize acceptableDocuments=_acceptableDocuments - In the implementation block
-(id)initWithJSONObject:(id)arg1 ;
-(NSArray *)acceptableDocuments;
-(void)setAcceptableDocuments:(NSArray *)arg1 ;
@end
