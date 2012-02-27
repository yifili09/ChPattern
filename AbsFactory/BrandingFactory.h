//
//  BrandingFactory.h
//  AbsFactory
//
//  Created by Entergate on 2012-02-24.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BrandingFactory : NSObject
{
    
}

+(BrandingFactory *)factory;

-(UIView *) brandedView;
-(UIButton *) brandedMainButton;
-(UIToolbar *) brandedTollbar;

@end
