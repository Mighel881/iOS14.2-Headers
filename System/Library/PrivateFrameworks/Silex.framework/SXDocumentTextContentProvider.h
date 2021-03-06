/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXTextContentProvider.h>

@class SXDocument, NSString;

@interface SXDocumentTextContentProvider : NSObject <SXTextContentProvider> {

	SXDocument* _document;

}

@property (nonatomic,readonly) SXDocument * document;               //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedQueue;
-(SXDocument *)document;
-(id)initWithDocument:(id)arg1 ;
-(id)textContentForComponents:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)textContentForComponent:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)classification:(id)arg1 isValidForType:(unsigned long long)arg2 ;
-(BOOL)contentRelevance:(unsigned long long)arg1 isValidForType:(unsigned long long)arg2 ;
-(void)textContentForType:(unsigned long long)arg1 onCompletion:(/*^block*/id)arg2 ;
@end

