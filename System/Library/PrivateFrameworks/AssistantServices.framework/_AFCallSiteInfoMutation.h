/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFCallSiteInfoMutating.h>

@class AFCallSiteInfo, NSString;

@interface _AFCallSiteInfoMutation : NSObject <AFCallSiteInfoMutating> {

	AFCallSiteInfo* _baseModel;
	NSString* _imagePath;
	NSString* _symbolName;
	struct {
		unsigned isDirty : 1;
		unsigned hasImagePath : 1;
		unsigned hasSymbolName : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)generate;
-(void)setSymbolName:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setImagePath:(id)arg1 ;
@end
